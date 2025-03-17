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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ShareBlueprintAcrossAccounts请求参数结构体
                */
                class ShareBlueprintAcrossAccountsRequest : public AbstractModel
                {
                public:
                    ShareBlueprintAcrossAccountsRequest();
                    ~ShareBlueprintAcrossAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID, 可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。
                     * @return BlueprintId 镜像ID, 可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像ID, 可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。
                     * @param _blueprintId 镜像ID, 可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取接收共享镜像的[账号ID](https://cloud.tencent.com/document/product/213/4944#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id)列表。账号ID不同于QQ号，查询用户账号ID请查看账号信息中的账号ID栏。账号个数取值最大为10。
                     * @return AccountIds 接收共享镜像的[账号ID](https://cloud.tencent.com/document/product/213/4944#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id)列表。账号ID不同于QQ号，查询用户账号ID请查看账号信息中的账号ID栏。账号个数取值最大为10。
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置接收共享镜像的[账号ID](https://cloud.tencent.com/document/product/213/4944#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id)列表。账号ID不同于QQ号，查询用户账号ID请查看账号信息中的账号ID栏。账号个数取值最大为10。
                     * @param _accountIds 接收共享镜像的[账号ID](https://cloud.tencent.com/document/product/213/4944#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id)列表。账号ID不同于QQ号，查询用户账号ID请查看账号信息中的账号ID栏。账号个数取值最大为10。
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                private:

                    /**
                     * 镜像ID, 可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 接收共享镜像的[账号ID](https://cloud.tencent.com/document/product/213/4944#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id)列表。账号ID不同于QQ号，查询用户账号ID请查看账号信息中的账号ID栏。账号个数取值最大为10。
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_
