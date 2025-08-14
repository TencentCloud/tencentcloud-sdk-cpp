/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessMediaByMPS请求参数结构体
                */
                class ProcessMediaByMPSRequest : public AbstractModel
                {
                public:
                    ProcessMediaByMPSRequest();
                    ~ProcessMediaByMPSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。
视频处理参数详情请参考：[MPS 发起媒体处理](https://cloud.tencent.com/document/api/862/37578)。
填写说明：
1. 目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；
2. 当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；
3. 音视频增强任务目前不支持使用预置模板发起，可通过 [CreateMPSTemplate](document/product/266/57382) 接口创建自定义模板。
示例：{"AiAnalysisTask":{"Definition":25}}
                     * @return MPSProcessMediaParams 该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。
视频处理参数详情请参考：[MPS 发起媒体处理](https://cloud.tencent.com/document/api/862/37578)。
填写说明：
1. 目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；
2. 当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；
3. 音视频增强任务目前不支持使用预置模板发起，可通过 [CreateMPSTemplate](document/product/266/57382) 接口创建自定义模板。
示例：{"AiAnalysisTask":{"Definition":25}}
                     * 
                     */
                    std::string GetMPSProcessMediaParams() const;

                    /**
                     * 设置该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。
视频处理参数详情请参考：[MPS 发起媒体处理](https://cloud.tencent.com/document/api/862/37578)。
填写说明：
1. 目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；
2. 当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；
3. 音视频增强任务目前不支持使用预置模板发起，可通过 [CreateMPSTemplate](document/product/266/57382) 接口创建自定义模板。
示例：{"AiAnalysisTask":{"Definition":25}}
                     * @param _mPSProcessMediaParams 该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。
视频处理参数详情请参考：[MPS 发起媒体处理](https://cloud.tencent.com/document/api/862/37578)。
填写说明：
1. 目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；
2. 当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；
3. 音视频增强任务目前不支持使用预置模板发起，可通过 [CreateMPSTemplate](document/product/266/57382) 接口创建自定义模板。
示例：{"AiAnalysisTask":{"Definition":25}}
                     * 
                     */
                    void SetMPSProcessMediaParams(const std::string& _mPSProcessMediaParams);

                    /**
                     * 判断参数 MPSProcessMediaParams 是否已赋值
                     * @return MPSProcessMediaParams 是否已赋值
                     * 
                     */
                    bool MPSProcessMediaParamsHasBeenSet() const;

                    /**
                     * 获取保留字段，特殊用途时使用。
                     * @return ExtInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。
                     * @param _extInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。
视频处理参数详情请参考：[MPS 发起媒体处理](https://cloud.tencent.com/document/api/862/37578)。
填写说明：
1. 目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；
2. 当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；
3. 音视频增强任务目前不支持使用预置模板发起，可通过 [CreateMPSTemplate](document/product/266/57382) 接口创建自定义模板。
示例：{"AiAnalysisTask":{"Definition":25}}
                     */
                    std::string m_mPSProcessMediaParams;
                    bool m_mPSProcessMediaParamsHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
