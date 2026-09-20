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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYAIQUOTALISTREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYAIQUOTALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayAIQuotaList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayAIQuotaListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayAIQuotaListRequest();
                    ~DescribeCloudNativeAPIGatewayAIQuotaListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例Id</p>
                     * @return GatewayId <p>网关实例Id</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例Id</p>
                     * @param _gatewayId <p>网关实例Id</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>开始位置</p>
                     * @return Offset <p>开始位置</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>开始位置</p>
                     * @param _offset <p>开始位置</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量</p>
                     * @return Limit <p>每页数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量</p>
                     * @param _limit <p>每页数量</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return Keyword <p>关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keyword <p>关键字</p>
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
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>配额预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * @return AlarmLevels <p>配额预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAlarmLevels() const;

                    /**
                     * 设置<p>配额预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * @param _alarmLevels <p>配额预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * 
                     */
                    void SetAlarmLevels(const std::vector<std::string>& _alarmLevels);

                    /**
                     * 判断参数 AlarmLevels 是否已赋值
                     * @return AlarmLevels 是否已赋值
                     * 
                     */
                    bool AlarmLevelsHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例Id</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>开始位置</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>配额预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     */
                    std::vector<std::string> m_alarmLevels;
                    bool m_alarmLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYAIQUOTALISTREQUEST_H_
