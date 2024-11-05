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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATETHREADRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATETHREADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ThreadToolResources.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * CreateThread返回参数结构体
                */
                class CreateThreadResponse : public AbstractModel
                {
                public:
                    CreateThreadResponse();
                    ~CreateThreadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话 ID
                     * @return ID 会话 ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取对象类型
                     * @return Object 对象类型
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取创建时间，Unix 时间戳，单位为秒。
                     * @return CreatedAt 创建时间，Unix 时间戳，单位为秒。
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取提供给工具的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolResources 提供给工具的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ThreadToolResources GetToolResources() const;

                    /**
                     * 判断参数 ToolResources 是否已赋值
                     * @return ToolResources 是否已赋值
                     * 
                     */
                    bool ToolResourcesHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 对象类型
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 创建时间，Unix 时间戳，单位为秒。
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 提供给工具的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ThreadToolResources m_toolResources;
                    bool m_toolResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATETHREADRESPONSE_H_
