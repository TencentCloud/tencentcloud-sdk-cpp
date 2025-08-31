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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_

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
                * DescribeDeliveryConfigs请求参数结构体
                */
                class DescribeDeliveryConfigsRequest : public AbstractModel
                {
                public:
                    DescribeDeliveryConfigsRequest();
                    ~DescribeDeliveryConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键字，可搜索日志投递配置项ID或日志投递配置项名称
                     * @return SearchWord 搜索关键字，可搜索日志投递配置项ID或日志投递配置项名称
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字，可搜索日志投递配置项ID或日志投递配置项名称
                     * @param _searchWord 搜索关键字，可搜索日志投递配置项ID或日志投递配置项名称
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
                     * 获取偏移量，取值范围大于等于0，默认值为0
                     * @return Offset 偏移量，取值范围大于等于0，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值范围大于等于0，默认值为0
                     * @param _offset 偏移量，取值范围大于等于0，默认值为0
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
                     * 获取单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @return Limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @param _limit 单页请求配置数量，取值范围[1, 50]，默认值为10
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
                     * 获取数据集ID列表
可通过调用[DescribePrograms](https://cloud.tencent.com/document/product/649/73477)查询已创建的数据集列表或登录[控制台](https://console.cloud.tencent.com/tsf/privilege?rid=1&tab=program&roleId=role-a22gwdwa)进行查看
                     * @return ProgramIdList 数据集ID列表
可通过调用[DescribePrograms](https://cloud.tencent.com/document/product/649/73477)查询已创建的数据集列表或登录[控制台](https://console.cloud.tencent.com/tsf/privilege?rid=1&tab=program&roleId=role-a22gwdwa)进行查看
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置数据集ID列表
可通过调用[DescribePrograms](https://cloud.tencent.com/document/product/649/73477)查询已创建的数据集列表或登录[控制台](https://console.cloud.tencent.com/tsf/privilege?rid=1&tab=program&roleId=role-a22gwdwa)进行查看
                     * @param _programIdList 数据集ID列表
可通过调用[DescribePrograms](https://cloud.tencent.com/document/product/649/73477)查询已创建的数据集列表或登录[控制台](https://console.cloud.tencent.com/tsf/privilege?rid=1&tab=program&roleId=role-a22gwdwa)进行查看
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                    /**
                     * 获取日志配置项ID列表
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * @return ConfigIdList 日志配置项ID列表
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * 
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置日志配置项ID列表
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * @param _configIdList 日志配置项ID列表
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
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
                     * 搜索关键字，可搜索日志投递配置项ID或日志投递配置项名称
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，取值范围大于等于0，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页请求配置数量，取值范围[1, 50]，默认值为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据集ID列表
可通过调用[DescribePrograms](https://cloud.tencent.com/document/product/649/73477)查询已创建的数据集列表或登录[控制台](https://console.cloud.tencent.com/tsf/privilege?rid=1&tab=program&roleId=role-a22gwdwa)进行查看
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * 日志配置项ID列表
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGSREQUEST_H_
