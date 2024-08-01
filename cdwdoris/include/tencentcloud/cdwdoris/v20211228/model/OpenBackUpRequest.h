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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENBACKUPREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * OpenBackUp请求参数结构体
                */
                class OpenBackUpRequest : public AbstractModel
                {
                public:
                    OpenBackUpRequest();
                    ~OpenBackUpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取取值：
open:打开
close:关闭
updateBucket:变更桶名
                     * @return OperationType 取值：
open:打开
close:关闭
updateBucket:变更桶名
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置取值：
open:打开
close:关闭
updateBucket:变更桶名
                     * @param _operationType 取值：
open:打开
close:关闭
updateBucket:变更桶名
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取桶名字
                     * @return CosBucketName 桶名字
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置桶名字
                     * @param _cosBucketName 桶名字
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 取值：
open:打开
close:关闭
updateBucket:变更桶名
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 桶名字
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENBACKUPREQUEST_H_
