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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateCosRiskScanTask请求参数结构体
                */
                class CreateCosRiskScanTaskRequest : public AbstractModel
                {
                public:
                    CreateCosRiskScanTaskRequest();
                    ~CreateCosRiskScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取需要扫描的桶列表
                     * @return BucketNameSet 需要扫描的桶列表
                     * 
                     */
                    std::vector<CosBucketInfo> GetBucketNameSet() const;

                    /**
                     * 设置需要扫描的桶列表
                     * @param _bucketNameSet 需要扫描的桶列表
                     * 
                     */
                    void SetBucketNameSet(const std::vector<CosBucketInfo>& _bucketNameSet);

                    /**
                     * 判断参数 BucketNameSet 是否已赋值
                     * @return BucketNameSet 是否已赋值
                     * 
                     */
                    bool BucketNameSetHasBeenSet() const;

                    /**
                     * 获取是否扫描全部的桶
                     * @return IsScanAllBucket 是否扫描全部的桶
                     * 
                     */
                    bool GetIsScanAllBucket() const;

                    /**
                     * 设置是否扫描全部的桶
                     * @param _isScanAllBucket 是否扫描全部的桶
                     * 
                     */
                    void SetIsScanAllBucket(const bool& _isScanAllBucket);

                    /**
                     * 判断参数 IsScanAllBucket 是否已赋值
                     * @return IsScanAllBucket 是否已赋值
                     * 
                     */
                    bool IsScanAllBucketHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 需要扫描的桶列表
                     */
                    std::vector<CosBucketInfo> m_bucketNameSet;
                    bool m_bucketNameSetHasBeenSet;

                    /**
                     * 是否扫描全部的桶
                     */
                    bool m_isScanAllBucket;
                    bool m_isScanAllBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_
