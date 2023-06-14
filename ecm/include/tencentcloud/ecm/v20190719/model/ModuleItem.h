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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODULEITEM_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/NodeInstanceNum.h>
#include <tencentcloud/ecm/v20190719/model/Module.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 模块列表Item信息
                */
                class ModuleItem : public AbstractModel
                {
                public:
                    ModuleItem();
                    ~ModuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点实例统计信息
                     * @return NodeInstanceNum 节点实例统计信息
                     * 
                     */
                    NodeInstanceNum GetNodeInstanceNum() const;

                    /**
                     * 设置节点实例统计信息
                     * @param _nodeInstanceNum 节点实例统计信息
                     * 
                     */
                    void SetNodeInstanceNum(const NodeInstanceNum& _nodeInstanceNum);

                    /**
                     * 判断参数 NodeInstanceNum 是否已赋值
                     * @return NodeInstanceNum 是否已赋值
                     * 
                     */
                    bool NodeInstanceNumHasBeenSet() const;

                    /**
                     * 获取模块信息
                     * @return Module 模块信息
                     * 
                     */
                    Module GetModule() const;

                    /**
                     * 设置模块信息
                     * @param _module 模块信息
                     * 
                     */
                    void SetModule(const Module& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                private:

                    /**
                     * 节点实例统计信息
                     */
                    NodeInstanceNum m_nodeInstanceNum;
                    bool m_nodeInstanceNumHasBeenSet;

                    /**
                     * 模块信息
                     */
                    Module m_module;
                    bool m_moduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODULEITEM_H_
