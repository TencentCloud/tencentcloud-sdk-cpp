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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBINSTANCELIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TCBEnvironments.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * tcb地域实例详情 - 异步关联云资源数据结构
                */
                class TCBInstanceList : public AbstractModel
                {
                public:
                    TCBInstanceList();
                    ~TCBInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取tcb环境实例详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environments tcb环境实例详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TCBEnvironments> GetEnvironments() const;

                    /**
                     * 设置tcb环境实例详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environments tcb环境实例详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironments(const std::vector<TCBEnvironments>& _environments);

                    /**
                     * 判断参数 Environments 是否已赋值
                     * @return Environments 是否已赋值
                     * 
                     */
                    bool EnvironmentsHasBeenSet() const;

                    /**
                     * 获取是否查询异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 是否查询异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置是否查询异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 是否查询异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * tcb环境实例详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TCBEnvironments> m_environments;
                    bool m_environmentsHasBeenSet;

                    /**
                     * 是否查询异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBINSTANCELIST_H_
