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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceLogToCLS请求参数结构体
                */
                class DescribeDBInstanceLogToCLSRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceLogToCLSRequest();
                    ~DescribeDBInstanceLogToCLSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CLS服务所在地域
                     * @return ClsRegion CLS服务所在地域
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置CLS服务所在地域
                     * @param _clsRegion CLS服务所在地域
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CLS服务所在地域
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSREQUEST_H_
