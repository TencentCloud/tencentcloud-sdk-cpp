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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MANUALLYADDED_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MANUALLYADDED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 手动加入的节点
                */
                class ManuallyAdded : public AbstractModel
                {
                public:
                    ManuallyAdded();
                    ~ManuallyAdded() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加入中的节点数量
                     * @return Joining 加入中的节点数量
                     * 
                     */
                    int64_t GetJoining() const;

                    /**
                     * 设置加入中的节点数量
                     * @param _joining 加入中的节点数量
                     * 
                     */
                    void SetJoining(const int64_t& _joining);

                    /**
                     * 判断参数 Joining 是否已赋值
                     * @return Joining 是否已赋值
                     * 
                     */
                    bool JoiningHasBeenSet() const;

                    /**
                     * 获取初始化中的节点数量
                     * @return Initializing 初始化中的节点数量
                     * 
                     */
                    int64_t GetInitializing() const;

                    /**
                     * 设置初始化中的节点数量
                     * @param _initializing 初始化中的节点数量
                     * 
                     */
                    void SetInitializing(const int64_t& _initializing);

                    /**
                     * 判断参数 Initializing 是否已赋值
                     * @return Initializing 是否已赋值
                     * 
                     */
                    bool InitializingHasBeenSet() const;

                    /**
                     * 获取正常的节点数量
                     * @return Normal 正常的节点数量
                     * 
                     */
                    int64_t GetNormal() const;

                    /**
                     * 设置正常的节点数量
                     * @param _normal 正常的节点数量
                     * 
                     */
                    void SetNormal(const int64_t& _normal);

                    /**
                     * 判断参数 Normal 是否已赋值
                     * @return Normal 是否已赋值
                     * 
                     */
                    bool NormalHasBeenSet() const;

                    /**
                     * 获取节点总数
                     * @return Total 节点总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置节点总数
                     * @param _total 节点总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 加入中的节点数量
                     */
                    int64_t m_joining;
                    bool m_joiningHasBeenSet;

                    /**
                     * 初始化中的节点数量
                     */
                    int64_t m_initializing;
                    bool m_initializingHasBeenSet;

                    /**
                     * 正常的节点数量
                     */
                    int64_t m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * 节点总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MANUALLYADDED_H_
