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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBEAPPREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * DescribeApp请求参数结构体
                */
                class DescribeAppRequest : public AbstractModel
                {
                public:
                    DescribeAppRequest();
                    ~DescribeAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物联卡应用ID
                     * @return Sdkappid 物联卡应用ID
                     * 
                     */
                    int64_t GetSdkappid() const;

                    /**
                     * 设置物联卡应用ID
                     * @param _sdkappid 物联卡应用ID
                     * 
                     */
                    void SetSdkappid(const int64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                private:

                    /**
                     * 物联卡应用ID
                     */
                    int64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBEAPPREQUEST_H_
