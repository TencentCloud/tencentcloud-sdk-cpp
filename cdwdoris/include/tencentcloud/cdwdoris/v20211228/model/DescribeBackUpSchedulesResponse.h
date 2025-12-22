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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BucketEncryptionInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpSchedules返回参数结构体
                */
                class DescribeBackUpSchedulesResponse : public AbstractModel
                {
                public:
                    DescribeBackUpSchedulesResponse();
                    ~DescribeBackUpSchedulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前系统时间
                     * @return CurrentTime 当前系统时间
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取桶加密状态信息
                     * @return BucketEncryption 桶加密状态信息
                     * 
                     */
                    BucketEncryptionInfo GetBucketEncryption() const;

                    /**
                     * 判断参数 BucketEncryption 是否已赋值
                     * @return BucketEncryption 是否已赋值
                     * 
                     */
                    bool BucketEncryptionHasBeenSet() const;

                private:

                    /**
                     * 当前系统时间
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * 桶加密状态信息
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_
