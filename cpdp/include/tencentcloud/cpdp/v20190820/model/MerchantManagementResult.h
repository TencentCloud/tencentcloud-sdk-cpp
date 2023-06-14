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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/MerchantManagementList.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 商户管理端结果
                */
                class MerchantManagementResult : public AbstractModel
                {
                public:
                    MerchantManagementResult();
                    ~MerchantManagementResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数。
                     * @return Total 总数。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数。
                     * @param _total 总数。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取商户列表。
                     * @return List 商户列表。
                     * 
                     */
                    std::vector<MerchantManagementList> GetList() const;

                    /**
                     * 设置商户列表。
                     * @param _list 商户列表。
                     * 
                     */
                    void SetList(const std::vector<MerchantManagementList>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 商户列表。
                     */
                    std::vector<MerchantManagementList> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTRESULT_H_
