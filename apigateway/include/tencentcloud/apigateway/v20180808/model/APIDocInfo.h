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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API文档详细信息
                */
                class APIDocInfo : public AbstractModel
                {
                public:
                    APIDocInfo();
                    ~APIDocInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API文档ID
                     * @return ApiDocId API文档ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API文档ID
                     * @param _apiDocId API文档ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                    /**
                     * 获取API文档名称
                     * @return ApiDocName API文档名称
                     * 
                     */
                    std::string GetApiDocName() const;

                    /**
                     * 设置API文档名称
                     * @param _apiDocName API文档名称
                     * 
                     */
                    void SetApiDocName(const std::string& _apiDocName);

                    /**
                     * 判断参数 ApiDocName 是否已赋值
                     * @return ApiDocName 是否已赋值
                     * 
                     */
                    bool ApiDocNameHasBeenSet() const;

                    /**
                     * 获取API文档构建状态
                     * @return ApiDocStatus API文档构建状态
                     * 
                     */
                    std::string GetApiDocStatus() const;

                    /**
                     * 设置API文档构建状态
                     * @param _apiDocStatus API文档构建状态
                     * 
                     */
                    void SetApiDocStatus(const std::string& _apiDocStatus);

                    /**
                     * 判断参数 ApiDocStatus 是否已赋值
                     * @return ApiDocStatus 是否已赋值
                     * 
                     */
                    bool ApiDocStatusHasBeenSet() const;

                    /**
                     * 获取API文档API数量
                     * @return ApiCount API文档API数量
                     * 
                     */
                    int64_t GetApiCount() const;

                    /**
                     * 设置API文档API数量
                     * @param _apiCount API文档API数量
                     * 
                     */
                    void SetApiCount(const int64_t& _apiCount);

                    /**
                     * 判断参数 ApiCount 是否已赋值
                     * @return ApiCount 是否已赋值
                     * 
                     */
                    bool ApiCountHasBeenSet() const;

                    /**
                     * 获取API文档查看次数
                     * @return ViewCount API文档查看次数
                     * 
                     */
                    int64_t GetViewCount() const;

                    /**
                     * 设置API文档查看次数
                     * @param _viewCount API文档查看次数
                     * 
                     */
                    void SetViewCount(const int64_t& _viewCount);

                    /**
                     * 判断参数 ViewCount 是否已赋值
                     * @return ViewCount 是否已赋值
                     * 
                     */
                    bool ViewCountHasBeenSet() const;

                    /**
                     * 获取API文档发布次数
                     * @return ReleaseCount API文档发布次数
                     * 
                     */
                    int64_t GetReleaseCount() const;

                    /**
                     * 设置API文档发布次数
                     * @param _releaseCount API文档发布次数
                     * 
                     */
                    void SetReleaseCount(const int64_t& _releaseCount);

                    /**
                     * 判断参数 ReleaseCount 是否已赋值
                     * @return ReleaseCount 是否已赋值
                     * 
                     */
                    bool ReleaseCountHasBeenSet() const;

                    /**
                     * 获取API文档访问URI
                     * @return ApiDocUri API文档访问URI
                     * 
                     */
                    std::string GetApiDocUri() const;

                    /**
                     * 设置API文档访问URI
                     * @param _apiDocUri API文档访问URI
                     * 
                     */
                    void SetApiDocUri(const std::string& _apiDocUri);

                    /**
                     * 判断参数 ApiDocUri 是否已赋值
                     * @return ApiDocUri 是否已赋值
                     * 
                     */
                    bool ApiDocUriHasBeenSet() const;

                    /**
                     * 获取API文档分享密码
                     * @return SharePassword API文档分享密码
                     * 
                     */
                    std::string GetSharePassword() const;

                    /**
                     * 设置API文档分享密码
                     * @param _sharePassword API文档分享密码
                     * 
                     */
                    void SetSharePassword(const std::string& _sharePassword);

                    /**
                     * 判断参数 SharePassword 是否已赋值
                     * @return SharePassword 是否已赋值
                     * 
                     */
                    bool SharePasswordHasBeenSet() const;

                    /**
                     * 获取API文档更新时间
                     * @return UpdatedTime API文档更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置API文档更新时间
                     * @param _updatedTime API文档更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取环境信息
                     * @return Environment 环境信息
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境信息
                     * @param _environment 环境信息
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取生成API文档的API ID
                     * @return ApiIds 生成API文档的API ID
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置生成API文档的API ID
                     * @param _apiIds 生成API文档的API ID
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取生成API文档的API名称
                     * @return ApiNames 生成API文档的API名称
                     * 
                     */
                    std::vector<std::string> GetApiNames() const;

                    /**
                     * 设置生成API文档的API名称
                     * @param _apiNames 生成API文档的API名称
                     * 
                     */
                    void SetApiNames(const std::vector<std::string>& _apiNames);

                    /**
                     * 判断参数 ApiNames 是否已赋值
                     * @return ApiNames 是否已赋值
                     * 
                     */
                    bool ApiNamesHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * API文档ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                    /**
                     * API文档名称
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * API文档构建状态
                     */
                    std::string m_apiDocStatus;
                    bool m_apiDocStatusHasBeenSet;

                    /**
                     * API文档API数量
                     */
                    int64_t m_apiCount;
                    bool m_apiCountHasBeenSet;

                    /**
                     * API文档查看次数
                     */
                    int64_t m_viewCount;
                    bool m_viewCountHasBeenSet;

                    /**
                     * API文档发布次数
                     */
                    int64_t m_releaseCount;
                    bool m_releaseCountHasBeenSet;

                    /**
                     * API文档访问URI
                     */
                    std::string m_apiDocUri;
                    bool m_apiDocUriHasBeenSet;

                    /**
                     * API文档分享密码
                     */
                    std::string m_sharePassword;
                    bool m_sharePasswordHasBeenSet;

                    /**
                     * API文档更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 环境信息
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 生成API文档的API ID
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 生成API文档的API名称
                     */
                    std::vector<std::string> m_apiNames;
                    bool m_apiNamesHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_
