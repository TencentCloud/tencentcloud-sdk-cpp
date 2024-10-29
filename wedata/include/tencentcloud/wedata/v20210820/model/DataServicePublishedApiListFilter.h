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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEPUBLISHEDAPILISTFILTER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEPUBLISHEDAPILISTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 获取数据服务API的发布态信息列表过滤条件
                */
                class DataServicePublishedApiListFilter : public AbstractModel
                {
                public:
                    DataServicePublishedApiListFilter();
                    ~DataServicePublishedApiListFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求路径关键词筛选
                     * @return PathUrl 请求路径关键词筛选
                     * 
                     */
                    std::string GetPathUrl() const;

                    /**
                     * 设置请求路径关键词筛选
                     * @param _pathUrl 请求路径关键词筛选
                     * 
                     */
                    void SetPathUrl(const std::string& _pathUrl);

                    /**
                     * 判断参数 PathUrl 是否已赋值
                     * @return PathUrl 是否已赋值
                     * 
                     */
                    bool PathUrlHasBeenSet() const;

                    /**
                     * 获取Api名称关键词筛选
                     * @return Keyword Api名称关键词筛选
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Api名称关键词筛选
                     * @param _keyword Api名称关键词筛选
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Api认证方式筛选 0:免认证 1:应用认证
                     * @return AuthTypes Api认证方式筛选 0:免认证 1:应用认证
                     * 
                     */
                    std::vector<uint64_t> GetAuthTypes() const;

                    /**
                     * 设置Api认证方式筛选 0:免认证 1:应用认证
                     * @param _authTypes Api认证方式筛选 0:免认证 1:应用认证
                     * 
                     */
                    void SetAuthTypes(const std::vector<uint64_t>& _authTypes);

                    /**
                     * 判断参数 AuthTypes 是否已赋值
                     * @return AuthTypes 是否已赋值
                     * 
                     */
                    bool AuthTypesHasBeenSet() const;

                    /**
                     * 获取服务Api状态 1:已上线  3:已下线
                     * @return ApiStatus 服务Api状态 1:已上线  3:已下线
                     * 
                     */
                    std::vector<uint64_t> GetApiStatus() const;

                    /**
                     * 设置服务Api状态 1:已上线  3:已下线
                     * @param _apiStatus 服务Api状态 1:已上线  3:已下线
                     * 
                     */
                    void SetApiStatus(const std::vector<uint64_t>& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                    /**
                     * 获取API配置方式 0:向导、1、脚本、2、注册Api
                     * @return ConfigTypes API配置方式 0:向导、1、脚本、2、注册Api
                     * 
                     */
                    std::vector<uint64_t> GetConfigTypes() const;

                    /**
                     * 设置API配置方式 0:向导、1、脚本、2、注册Api
                     * @param _configTypes API配置方式 0:向导、1、脚本、2、注册Api
                     * 
                     */
                    void SetConfigTypes(const std::vector<uint64_t>& _configTypes);

                    /**
                     * 判断参数 ConfigTypes 是否已赋值
                     * @return ConfigTypes 是否已赋值
                     * 
                     */
                    bool ConfigTypesHasBeenSet() const;

                private:

                    /**
                     * 请求路径关键词筛选
                     */
                    std::string m_pathUrl;
                    bool m_pathUrlHasBeenSet;

                    /**
                     * Api名称关键词筛选
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Api认证方式筛选 0:免认证 1:应用认证
                     */
                    std::vector<uint64_t> m_authTypes;
                    bool m_authTypesHasBeenSet;

                    /**
                     * 服务Api状态 1:已上线  3:已下线
                     */
                    std::vector<uint64_t> m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * API配置方式 0:向导、1、脚本、2、注册Api
                     */
                    std::vector<uint64_t> m_configTypes;
                    bool m_configTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEPUBLISHEDAPILISTFILTER_H_
