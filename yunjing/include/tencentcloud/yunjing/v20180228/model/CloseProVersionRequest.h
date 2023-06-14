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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CloseProVersion请求参数结构体
                */
                class CloseProVersionRequest : public AbstractModel
                {
                public:
                    CloseProVersionRequest();
                    ~CloseProVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * @return Quuid 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * @param _quuid 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 主机唯一标识Uuid。
黑石的InstanceId，CVM的Uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_CLOSEPROVERSIONREQUEST_H_
