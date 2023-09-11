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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/TemplateListInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplateList返回参数结构体
                */
                class DescribeAddressTemplateListResponse : public AbstractModel
                {
                public:
                    DescribeAddressTemplateListResponse();
                    ~DescribeAddressTemplateListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板总数
                     * @return Total 模板总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取模板列表数据
                     * @return Data 模板列表数据
                     * 
                     */
                    std::vector<TemplateListInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取模板名称列表
                     * @return NameList 模板名称列表
                     * 
                     */
                    std::vector<std::string> GetNameList() const;

                    /**
                     * 判断参数 NameList 是否已赋值
                     * @return NameList 是否已赋值
                     * 
                     */
                    bool NameListHasBeenSet() const;

                private:

                    /**
                     * 模板总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 模板列表数据
                     */
                    std::vector<TemplateListInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 模板名称列表
                     */
                    std::vector<std::string> m_nameList;
                    bool m_nameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTRESPONSE_H_
