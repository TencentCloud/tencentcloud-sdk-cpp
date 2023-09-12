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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPSWITHPLUGINREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPSWITHPLUGINREQUEST_H_

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
                * DescribeGroupsWithPlugin请求参数结构体
                */
                class DescribeGroupsWithPluginRequest : public AbstractModel
                {
                public:
                    DescribeGroupsWithPluginRequest();
                    ~DescribeGroupsWithPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取插件ID
                     * @return PluginId 插件ID
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件ID
                     * @param _pluginId 插件ID
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
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
                     * 获取每页记录数量
                     * @return Limit 每页记录数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页记录数量
                     * @param _limit 每页记录数量
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
                     * 获取绑定/未绑定: true / false
                     * @return Bound 绑定/未绑定: true / false
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 设置绑定/未绑定: true / false
                     * @param _bound 绑定/未绑定: true / false
                     * 
                     */
                    void SetBound(const bool& _bound);

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
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
                     * 获取网关实体ID
                     * @return GatewayInstanceId 网关实体ID
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实体ID
                     * @param _gatewayInstanceId 网关实体ID
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 插件ID
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页记录数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 绑定/未绑定: true / false
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 网关实体ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPSWITHPLUGINREQUEST_H_
