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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSIDENTIFYFILELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSIDENTIFYFILELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosIdentifyFileList请求参数结构体
                */
                class DescribeCosIdentifyFileListRequest : public AbstractModel
                {
                public:
                    DescribeCosIdentifyFileListRequest();
                    ~DescribeCosIdentifyFileListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储桶名</p>
                     * @return BucketName <p>存储桶名</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>存储桶名</p>
                     * @param _bucketName <p>存储桶名</p>
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

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
                     * 获取<p>筛选项</p>
                     * @return Filter <p>筛选项</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>筛选项</p>
                     * @param _filter <p>筛选项</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>0：没有识别结果 1：有识别结果</p>
                     * @return ResultStatus <p>0：没有识别结果 1：有识别结果</p>
                     * 
                     */
                    int64_t GetResultStatus() const;

                    /**
                     * 设置<p>0：没有识别结果 1：有识别结果</p>
                     * @param _resultStatus <p>0：没有识别结果 1：有识别结果</p>
                     * 
                     */
                    void SetResultStatus(const int64_t& _resultStatus);

                    /**
                     * 判断参数 ResultStatus 是否已赋值
                     * @return ResultStatus 是否已赋值
                     * 
                     */
                    bool ResultStatusHasBeenSet() const;

                private:

                    /**
                     * <p>存储桶名</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>筛选项</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>0：没有识别结果 1：有识别结果</p>
                     */
                    int64_t m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSIDENTIFYFILELISTREQUEST_H_
