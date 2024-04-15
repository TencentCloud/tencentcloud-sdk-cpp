/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取媒体类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @return MediaType 媒体类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置媒体类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @param _mediaType 媒体类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取媒体名称。
                     * @return MediaName 媒体名称。
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置媒体名称。
                     * @param _mediaName 媒体名称。
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
                     * 获取封面类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @return CoverType 封面类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * 
                     */
                    std::string GetCoverType() const;

                    /**
                     * 设置封面类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @param _coverType 封面类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
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
                     * 获取媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 [创建任务流模板](/document/product/266/33819) 并为模板命名。
                     * @return Procedure 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 [创建任务流模板](/document/product/266/33819) 并为模板命名。
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 [创建任务流模板](/document/product/266/33819) 并为模板命名。
                     * @param _procedure 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 [创建任务流模板](/document/product/266/33819) 并为模板命名。
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
                     * 获取媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return ExpireTime 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param _expireTime 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
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
                     * 获取指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @return StorageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @param _storageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
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
                     * 获取分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @param _classId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
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
                     * 获取来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。
                     * @return SourceContext 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。
                     * @param _sourceContext 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。
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
                     * 获取会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。
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
                     * 媒体类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 媒体名称。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 封面类型，可选值请参考 [上传能力综述](/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 [创建任务流模板](/document/product/266/33819) 并为模板命名。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADREQUEST_H_
