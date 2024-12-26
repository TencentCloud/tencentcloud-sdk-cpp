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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SubUserInfo.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSubUserInfo返回参数结构体
                */
                class DescribeSubUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeSubUserInfoResponse();
                    ~DescribeSubUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取子用户列表
                     * @return Data 子用户列表
                     * 
                     */
                    std::vector<SubUserInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取厂商枚举列表
                     * @return CloudTypeLst 厂商枚举列表
                     * 
                     */
                    std::vector<FilterDataObject> GetCloudTypeLst() const;

                    /**
                     * 判断参数 CloudTypeLst 是否已赋值
                     * @return CloudTypeLst 是否已赋值
                     * 
                     */
                    bool CloudTypeLstHasBeenSet() const;

                    /**
                     * 获取所属主账号appid枚举
                     * @return OwnerAppIDLst 所属主账号appid枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetOwnerAppIDLst() const;

                    /**
                     * 判断参数 OwnerAppIDLst 是否已赋值
                     * @return OwnerAppIDLst 是否已赋值
                     * 
                     */
                    bool OwnerAppIDLstHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 子用户列表
                     */
                    std::vector<SubUserInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 厂商枚举列表
                     */
                    std::vector<FilterDataObject> m_cloudTypeLst;
                    bool m_cloudTypeLstHasBeenSet;

                    /**
                     * 所属主账号appid枚举
                     */
                    std::vector<FilterDataObject> m_ownerAppIDLst;
                    bool m_ownerAppIDLstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_
