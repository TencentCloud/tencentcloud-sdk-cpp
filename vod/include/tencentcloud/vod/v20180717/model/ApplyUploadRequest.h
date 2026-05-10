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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADREQUEST_H_

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
                * ApplyUpload请求参数结构体
                */
                class ApplyUploadRequest : public AbstractModel
                {
                public:
                    ApplyUploadRequest();
                    ~ApplyUploadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * @return MediaType <p>媒体类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>媒体类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * @param _mediaType <p>媒体类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>媒体名称。</p>
                     * @return MediaName <p>媒体名称。</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>媒体名称。</p>
                     * @param _mediaName <p>媒体名称。</p>
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取<p>封面类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * @return CoverType <p>封面类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * 
                     */
                    std::string GetCoverType() const;

                    /**
                     * 设置<p>封面类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * @param _coverType <p>封面类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     * 
                     */
                    void SetCoverType(const std::string& _coverType);

                    /**
                     * 判断参数 CoverType 是否已赋值
                     * @return CoverType 是否已赋值
                     * 
                     */
                    bool CoverTypeHasBeenSet() const;

                    /**
                     * 获取<p>媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 <a href="/document/product/266/33819">创建任务流模板</a> 并为模板命名。</p>
                     * @return Procedure <p>媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 <a href="/document/product/266/33819">创建任务流模板</a> 并为模板命名。</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 <a href="/document/product/266/33819">创建任务流模板</a> 并为模板命名。</p>
                     * @param _procedure <p>媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 <a href="/document/product/266/33819">创建任务流模板</a> 并为模板命名。</p>
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 <a href="/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @return ExpireTime <p>媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 <a href="/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 <a href="/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @param _expireTime <p>媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 <a href="/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>指定上传园区，仅适用于对上传地域有特殊需求的用户。</p>
                     * @return StorageRegion <p>指定上传园区，仅适用于对上传地域有特殊需求的用户。</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>指定上传园区，仅适用于对上传地域有特殊需求的用户。</p>
                     * @param _storageRegion <p>指定上传园区，仅适用于对上传地域有特殊需求的用户。</p>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * @return ClassId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * @param _classId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。</p>
                     * @return SourceContext <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。</p>
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。</p>
                     * @param _sourceContext <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。</p>
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取<p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

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

                    /**
                     * 获取<p>媒体存储路径，以/开头。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以指定存储路径。</p>
                     * @return MediaStoragePath <p>媒体存储路径，以/开头。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以指定存储路径。</p>
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置<p>媒体存储路径，以/开头。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以指定存储路径。</p>
                     * @param _mediaStoragePath <p>媒体存储路径，以/开头。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以指定存储路径。</p>
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                private:

                    /**
                     * <p>媒体类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>媒体名称。</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>封面类型，可选值请参考 <a href="/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B">上传能力综述</a>。</p>
                     */
                    std::string m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * <p>媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 <a href="/document/product/266/33819">创建任务流模板</a> 并为模板命名。</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 <a href="/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>指定上传园区，仅适用于对上传地域有特殊需求的用户。</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/7812">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。</p>
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>媒体存储路径，以/开头。<br>只有<a href="https://cloud.tencent.com/document/product/266/126825">FileID + Path 模式</a>的子应用可以指定存储路径。</p>
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADREQUEST_H_
