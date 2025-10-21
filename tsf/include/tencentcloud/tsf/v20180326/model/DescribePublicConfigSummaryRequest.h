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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGSUMMARYREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePublicConfigSummary请求参数结构体
                */
                class DescribePublicConfigSummaryRequest : public AbstractModel
                {
                public:
                    DescribePublicConfigSummaryRequest();
                    ~DescribePublicConfigSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询关键字，模糊查询：配置项名称，不传入时查询全量。
                     * @return SearchWord 查询关键字，模糊查询：配置项名称，不传入时查询全量。
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置查询关键字，模糊查询：配置项名称，不传入时查询全量。
                     * @param _searchWord 查询关键字，模糊查询：配置项名称，不传入时查询全量。
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为50。
                     * @return Limit 返回数量，默认为20，最大值为50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为50。
                     * @param _limit 返回数量，默认为20，最大值为50。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段。
- creation_time：按时间排序
- config_name：按名称排序
                     * @return OrderBy 排序字段。
- creation_time：按时间排序
- config_name：按名称排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段。
- creation_time：按时间排序
- config_name：按名称排序
                     * @param _orderBy 排序字段。
- creation_time：按时间排序
- config_name：按名称排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序顺序。
- 0：升序
- 1：降序
                     * @return OrderType 排序顺序。
- 0：升序
- 1：降序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序顺序。
- 0：升序
- 1：降序
                     * @param _orderType 排序顺序。
- 0：升序
- 1：降序
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取TAG标签资源值。
                     * @return ConfigTagList TAG标签资源值。
                     * 
                     */
                    std::vector<std::string> GetConfigTagList() const;

                    /**
                     * 设置TAG标签资源值。
                     * @param _configTagList TAG标签资源值。
                     * 
                     */
                    void SetConfigTagList(const std::vector<std::string>& _configTagList);

                    /**
                     * 判断参数 ConfigTagList 是否已赋值
                     * @return ConfigTagList 是否已赋值
                     * 
                     */
                    bool ConfigTagListHasBeenSet() const;

                    /**
                     * 获取忽略传参，业务预留字段。
                     * @return DisableProgramAuthCheck 忽略传参，业务预留字段。
                     * 
                     */
                    bool GetDisableProgramAuthCheck() const;

                    /**
                     * 设置忽略传参，业务预留字段。
                     * @param _disableProgramAuthCheck 忽略传参，业务预留字段。
                     * 
                     */
                    void SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck);

                    /**
                     * 判断参数 DisableProgramAuthCheck 是否已赋值
                     * @return DisableProgramAuthCheck 是否已赋值
                     * 
                     */
                    bool DisableProgramAuthCheckHasBeenSet() const;

                    /**
                     * 获取配置ID。该参数可以通过调用 [DescribePublicConfigs](https://cloud.tencent.com/document/product/649/38335) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=public)配置详情-配置版本页查看；也可以调用[CreatePublicConfig](https://cloud.tencent.com/document/product/649/38347)创建新的配置。
                     * @return ConfigIdList 配置ID。该参数可以通过调用 [DescribePublicConfigs](https://cloud.tencent.com/document/product/649/38335) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=public)配置详情-配置版本页查看；也可以调用[CreatePublicConfig](https://cloud.tencent.com/document/product/649/38347)创建新的配置。
                     * 
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置配置ID。该参数可以通过调用 [DescribePublicConfigs](https://cloud.tencent.com/document/product/649/38335) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=public)配置详情-配置版本页查看；也可以调用[CreatePublicConfig](https://cloud.tencent.com/document/product/649/38347)创建新的配置。
                     * @param _configIdList 配置ID。该参数可以通过调用 [DescribePublicConfigs](https://cloud.tencent.com/document/product/649/38335) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=public)配置详情-配置版本页查看；也可以调用[CreatePublicConfig](https://cloud.tencent.com/document/product/649/38347)创建新的配置。
                     * 
                     */
                    void SetConfigIdList(const std::vector<std::string>& _configIdList);

                    /**
                     * 判断参数 ConfigIdList 是否已赋值
                     * @return ConfigIdList 是否已赋值
                     * 
                     */
                    bool ConfigIdListHasBeenSet() const;

                private:

                    /**
                     * 查询关键字，模糊查询：配置项名称，不传入时查询全量。
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。
- creation_time：按时间排序
- config_name：按名称排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序顺序。
- 0：升序
- 1：降序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * TAG标签资源值。
                     */
                    std::vector<std::string> m_configTagList;
                    bool m_configTagListHasBeenSet;

                    /**
                     * 忽略传参，业务预留字段。
                     */
                    bool m_disableProgramAuthCheck;
                    bool m_disableProgramAuthCheckHasBeenSet;

                    /**
                     * 配置ID。该参数可以通过调用 [DescribePublicConfigs](https://cloud.tencent.com/document/product/649/38335) 的返回值中的 ConfigId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?subTab=public)配置详情-配置版本页查看；也可以调用[CreatePublicConfig](https://cloud.tencent.com/document/product/649/38347)创建新的配置。
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGSUMMARYREQUEST_H_
