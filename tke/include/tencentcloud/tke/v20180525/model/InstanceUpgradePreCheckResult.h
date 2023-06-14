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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResultItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 某个节点升级前检查结果
                */
                class InstanceUpgradePreCheckResult : public AbstractModel
                {
                public:
                    InstanceUpgradePreCheckResult();
                    ~InstanceUpgradePreCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查是否通过
                     * @return CheckPass 检查是否通过
                     * 
                     */
                    bool GetCheckPass() const;

                    /**
                     * 设置检查是否通过
                     * @param _checkPass 检查是否通过
                     * 
                     */
                    void SetCheckPass(const bool& _checkPass);

                    /**
                     * 判断参数 CheckPass 是否已赋值
                     * @return CheckPass 是否已赋值
                     * 
                     */
                    bool CheckPassHasBeenSet() const;

                    /**
                     * 获取检查项数组
                     * @return Items 检查项数组
                     * 
                     */
                    std::vector<InstanceUpgradePreCheckResultItem> GetItems() const;

                    /**
                     * 设置检查项数组
                     * @param _items 检查项数组
                     * 
                     */
                    void SetItems(const std::vector<InstanceUpgradePreCheckResultItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取本节点独立pod列表
                     * @return SinglePods 本节点独立pod列表
                     * 
                     */
                    std::vector<std::string> GetSinglePods() const;

                    /**
                     * 设置本节点独立pod列表
                     * @param _singlePods 本节点独立pod列表
                     * 
                     */
                    void SetSinglePods(const std::vector<std::string>& _singlePods);

                    /**
                     * 判断参数 SinglePods 是否已赋值
                     * @return SinglePods 是否已赋值
                     * 
                     */
                    bool SinglePodsHasBeenSet() const;

                private:

                    /**
                     * 检查是否通过
                     */
                    bool m_checkPass;
                    bool m_checkPassHasBeenSet;

                    /**
                     * 检查项数组
                     */
                    std::vector<InstanceUpgradePreCheckResultItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 本节点独立pod列表
                     */
                    std::vector<std::string> m_singlePods;
                    bool m_singlePodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_
