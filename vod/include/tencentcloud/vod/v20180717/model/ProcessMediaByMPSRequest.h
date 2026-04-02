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
                     * 获取<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * @return FileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * @param _fileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
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
                     * 获取<p>该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。<br>视频处理参数详情请参考：<a href="https://cloud.tencent.com/document/api/862/37578">MPS 发起媒体处理</a>。<br>填写说明：</p><ol><li>目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；</li><li>当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；</li><li>音视频增强任务目前不支持使用预置模板发起，可通过 <a href="https://cloud.tencent.com/document/product/266/122580">CreateMPSTemplate</a> 接口创建自定义模板。</li></ol>
                     * @return MPSProcessMediaParams <p>该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。<br>视频处理参数详情请参考：<a href="https://cloud.tencent.com/document/api/862/37578">MPS 发起媒体处理</a>。<br>填写说明：</p><ol><li>目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；</li><li>当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；</li><li>音视频增强任务目前不支持使用预置模板发起，可通过 <a href="https://cloud.tencent.com/document/product/266/122580">CreateMPSTemplate</a> 接口创建自定义模板。</li></ol>
                     * 
                     */
                    std::string GetMPSProcessMediaParams() const;

                    /**
                     * 设置<p>该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。<br>视频处理参数详情请参考：<a href="https://cloud.tencent.com/document/api/862/37578">MPS 发起媒体处理</a>。<br>填写说明：</p><ol><li>目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；</li><li>当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；</li><li>音视频增强任务目前不支持使用预置模板发起，可通过 <a href="https://cloud.tencent.com/document/product/266/122580">CreateMPSTemplate</a> 接口创建自定义模板。</li></ol>
                     * @param _mPSProcessMediaParams <p>该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。<br>视频处理参数详情请参考：<a href="https://cloud.tencent.com/document/api/862/37578">MPS 发起媒体处理</a>。<br>填写说明：</p><ol><li>目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；</li><li>当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；</li><li>音视频增强任务目前不支持使用预置模板发起，可通过 <a href="https://cloud.tencent.com/document/product/266/122580">CreateMPSTemplate</a> 接口创建自定义模板。</li></ol>
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
                     * 获取<p>保留字段，特殊用途时使用。</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。</p>
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
                     * <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>该参数用于透传至媒体处理服务（MPS），以便从云点播侧发起 MPS 视频处理任务。<br>视频处理参数详情请参考：<a href="https://cloud.tencent.com/document/api/862/37578">MPS 发起媒体处理</a>。<br>填写说明：</p><ol><li>目前仅需要配置 MPS “发起媒体处理”接口中任务配置相关的参数，如 AiAnalysisTask 与 MediaProcessTask，其他参数无需填写。若包含其它参数，系统将自动忽略；</li><li>当前仅支持通过此方式发起智能擦除及音视频增强任务。若配置了其他任务类型的相关参数，系统将自动忽略这些参数；</li><li>音视频增强任务目前不支持使用预置模板发起，可通过 <a href="https://cloud.tencent.com/document/product/266/122580">CreateMPSTemplate</a> 接口创建自定义模板。</li></ol>
                     */
                    std::string m_mPSProcessMediaParams;
                    bool m_mPSProcessMediaParamsHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
