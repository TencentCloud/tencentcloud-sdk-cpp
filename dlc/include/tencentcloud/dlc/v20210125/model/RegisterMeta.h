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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_REGISTERMETA_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_REGISTERMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 注册元信息（携带即注册语义：storageUri 为训练产物根，零拷贝引用）
                */
                class RegisterMeta : public AbstractModel
                {
                public:
                    RegisterMeta();
                    ~RegisterMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Checkpoint 子路径不能为空</p>
                     * @return CheckpointSubPath <p>Checkpoint 子路径不能为空</p>
                     * 
                     */
                    std::string GetCheckpointSubPath() const;

                    /**
                     * 设置<p>Checkpoint 子路径不能为空</p>
                     * @param _checkpointSubPath <p>Checkpoint 子路径不能为空</p>
                     * 
                     */
                    void SetCheckpointSubPath(const std::string& _checkpointSubPath);

                    /**
                     * 判断参数 CheckpointSubPath 是否已赋值
                     * @return CheckpointSubPath 是否已赋值
                     * 
                     */
                    bool CheckpointSubPathHasBeenSet() const;

                    /**
                     * 获取<p>来源训练实例标识（接入方自定义语义，可选）</p>
                     * @return InstanceId <p>来源训练实例标识（接入方自定义语义，可选）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>来源训练实例标识（接入方自定义语义，可选）</p>
                     * @param _instanceId <p>来源训练实例标识（接入方自定义语义，可选）</p>
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
                     * 获取<p>接入方扩展键值列表（原样落库，平台不解释）</p>
                     * @return Extras <p>接入方扩展键值列表（原样落库，平台不解释）</p>
                     * 
                     */
                    std::vector<KVPair> GetExtras() const;

                    /**
                     * 设置<p>接入方扩展键值列表（原样落库，平台不解释）</p>
                     * @param _extras <p>接入方扩展键值列表（原样落库，平台不解释）</p>
                     * 
                     */
                    void SetExtras(const std::vector<KVPair>& _extras);

                    /**
                     * 判断参数 Extras 是否已赋值
                     * @return Extras 是否已赋值
                     * 
                     */
                    bool ExtrasHasBeenSet() const;

                private:

                    /**
                     * <p>Checkpoint 子路径不能为空</p>
                     */
                    std::string m_checkpointSubPath;
                    bool m_checkpointSubPathHasBeenSet;

                    /**
                     * <p>来源训练实例标识（接入方自定义语义，可选）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>接入方扩展键值列表（原样落库，平台不解释）</p>
                     */
                    std::vector<KVPair> m_extras;
                    bool m_extrasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_REGISTERMETA_H_
