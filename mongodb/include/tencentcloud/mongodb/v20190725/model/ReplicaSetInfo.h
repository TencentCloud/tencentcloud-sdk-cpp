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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICASETINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICASETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 分片信息
                */
                class ReplicaSetInfo : public AbstractModel
                {
                public:
                    ReplicaSetInfo();
                    ~ReplicaSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取副本集ID
                     * @return ReplicaSetId 副本集ID
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置副本集ID
                     * @param _replicaSetId 副本集ID
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                private:

                    /**
                     * 副本集ID
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICASETINFO_H_
