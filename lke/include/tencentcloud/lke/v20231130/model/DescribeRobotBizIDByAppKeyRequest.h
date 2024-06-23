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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeRobotBizIDByAppKey请求参数结构体
                */
                class DescribeRobotBizIDByAppKeyRequest : public AbstractModel
                {
                public:
                    DescribeRobotBizIDByAppKeyRequest();
                    ~DescribeRobotBizIDByAppKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用appkey
                     * @return AppKey 应用appkey
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置应用appkey
                     * @param _appKey 应用appkey
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                private:

                    /**
                     * 应用appkey
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYREQUEST_H_
