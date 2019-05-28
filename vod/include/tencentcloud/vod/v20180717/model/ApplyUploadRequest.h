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
                     * 获取媒体类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @return MediaType 媒体类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置媒体类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @param MediaType 媒体类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取媒体名称。
                     * @return MediaName 媒体名称。
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置媒体名称。
                     * @param MediaName 媒体名称。
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取封面类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @return CoverType 封面类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string GetCoverType() const;

                    /**
                     * 设置封面类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     * @param CoverType 封面类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    void SetCoverType(const std::string& _coverType);

                    /**
                     * 判断参数 CoverType 是否已赋值
                     * @return CoverType 是否已赋值
                     */
                    bool CoverTypeHasBeenSet() const;

                    /**
                     * 获取媒体后续任务操作，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。
                     * @return Procedure 媒体后续任务操作，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置媒体后续任务操作，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。
                     * @param Procedure 媒体后续任务操作，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return ExpireTime 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param ExpireTime 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @return StorageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @param StorageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取分类ID，用于对媒体进行分类管理，可通过[创建分类](https://cloud.tencent.com/document/product/266/7812)接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过[创建分类](https://cloud.tencent.com/document/product/266/7812)接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过[创建分类](https://cloud.tencent.com/document/product/266/7812)接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @param ClassId 分类ID，用于对媒体进行分类管理，可通过[创建分类](https://cloud.tencent.com/document/product/266/7812)接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，上传回调接口将返回该字段值，最长 250 个字符。
                     * @return SourceContext 来源上下文，用于透传用户请求信息，上传回调接口将返回该字段值，最长 250 个字符。
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，上传回调接口将返回该字段值，最长 250 个字符。
                     * @param SourceContext 来源上下文，用于透传用户请求信息，上传回调接口将返回该字段值，最长 250 个字符。
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 媒体类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * 媒体名称。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 封面类型，可选值请参考[上传能力综述](https://cloud.tencent.com/document/product/266/9760#.E6.96.87.E4.BB.B6.E7.B1.BB.E5.9E.8B)。
                     */
                    std::string m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * 媒体后续任务操作，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * 媒体文件过期时间，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过[创建分类](https://cloud.tencent.com/document/product/266/7812)接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，上传回调接口将返回该字段值，最长 250 个字符。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_APPLYUPLOADREQUEST_H_
