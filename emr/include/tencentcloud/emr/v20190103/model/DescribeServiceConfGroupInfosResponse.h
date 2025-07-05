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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ConfigurationItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeServiceConfGroupInfos返回参数结构体
                */
                class DescribeServiceConfGroupInfosResponse : public AbstractModel
                {
                public:
                    DescribeServiceConfGroupInfosResponse();
                    ~DescribeServiceConfGroupInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表大小
                     * @return TotalCount 列表大小
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取配置项key value列表
                     * @return ConfItemKVList 配置项key value列表
                     * 
                     */
                    std::vector<ConfigurationItem> GetConfItemKVList() const;

                    /**
                     * 判断参数 ConfItemKVList 是否已赋值
                     * @return ConfItemKVList 是否已赋值
                     * 
                     */
                    bool ConfItemKVListHasBeenSet() const;

                private:

                    /**
                     * 列表大小
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 配置项key value列表
                     */
                    std::vector<ConfigurationItem> m_confItemKVList;
                    bool m_confItemKVListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICECONFGROUPINFOSRESPONSE_H_
