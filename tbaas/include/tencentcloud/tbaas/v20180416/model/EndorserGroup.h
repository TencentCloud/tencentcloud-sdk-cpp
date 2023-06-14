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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_ENDORSERGROUP_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_ENDORSERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 背书组织及其节点列表
                */
                class EndorserGroup : public AbstractModel
                {
                public:
                    EndorserGroup();
                    ~EndorserGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取背书组织名称
                     * @return EndorserGroupName 背书组织名称
                     * 
                     */
                    std::string GetEndorserGroupName() const;

                    /**
                     * 设置背书组织名称
                     * @param _endorserGroupName 背书组织名称
                     * 
                     */
                    void SetEndorserGroupName(const std::string& _endorserGroupName);

                    /**
                     * 判断参数 EndorserGroupName 是否已赋值
                     * @return EndorserGroupName 是否已赋值
                     * 
                     */
                    bool EndorserGroupNameHasBeenSet() const;

                    /**
                     * 获取背书节点列表
                     * @return EndorserPeerList 背书节点列表
                     * 
                     */
                    std::vector<std::string> GetEndorserPeerList() const;

                    /**
                     * 设置背书节点列表
                     * @param _endorserPeerList 背书节点列表
                     * 
                     */
                    void SetEndorserPeerList(const std::vector<std::string>& _endorserPeerList);

                    /**
                     * 判断参数 EndorserPeerList 是否已赋值
                     * @return EndorserPeerList 是否已赋值
                     * 
                     */
                    bool EndorserPeerListHasBeenSet() const;

                private:

                    /**
                     * 背书组织名称
                     */
                    std::string m_endorserGroupName;
                    bool m_endorserGroupNameHasBeenSet;

                    /**
                     * 背书节点列表
                     */
                    std::vector<std::string> m_endorserPeerList;
                    bool m_endorserPeerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_ENDORSERGROUP_H_
