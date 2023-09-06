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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TCBEnvironment.h>
#include <tencentcloud/ssl/v20191205/model/TCBAccessService.h>
#include <tencentcloud/ssl/v20191205/model/TCBHostService.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * tcb环境实例详情 - 异步关联云资源数据结构
                */
                class TCBEnvironments : public AbstractModel
                {
                public:
                    TCBEnvironments();
                    ~TCBEnvironments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tcb环境	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment tcb环境	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TCBEnvironment GetEnvironment() const;

                    /**
                     * 设置tcb环境	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment tcb环境	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironment(const TCBEnvironment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取访问服务	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessService 访问服务	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TCBAccessService GetAccessService() const;

                    /**
                     * 设置访问服务	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessService 访问服务	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessService(const TCBAccessService& _accessService);

                    /**
                     * 判断参数 AccessService 是否已赋值
                     * @return AccessService 是否已赋值
                     * 
                     */
                    bool AccessServiceHasBeenSet() const;

                    /**
                     * 获取静态托管	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostService 静态托管	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TCBHostService GetHostService() const;

                    /**
                     * 设置静态托管	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostService 静态托管	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostService(const TCBHostService& _hostService);

                    /**
                     * 判断参数 HostService 是否已赋值
                     * @return HostService 是否已赋值
                     * 
                     */
                    bool HostServiceHasBeenSet() const;

                private:

                    /**
                     * tcb环境	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TCBEnvironment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 访问服务	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TCBAccessService m_accessService;
                    bool m_accessServiceHasBeenSet;

                    /**
                     * 静态托管	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TCBHostService m_hostService;
                    bool m_hostServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_
