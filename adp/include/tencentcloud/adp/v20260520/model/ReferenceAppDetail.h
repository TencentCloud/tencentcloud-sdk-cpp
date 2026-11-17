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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REFERENCEAPPDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REFERENCEAPPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 引用的来源应用详情
                */
                class ReferenceAppDetail : public AbstractModel
                {
                public:
                    ReferenceAppDetail();
                    ~ReferenceAppDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>来源应用当前名称</p>
                     * @return Name <p>来源应用当前名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>来源应用当前名称</p>
                     * @param _name <p>来源应用当前名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>来源应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： Multi-Agent模式</li><li>3： 单工作流模式</li><li>4： Claw模式</li></ul>
                     * @return AppMode <p>来源应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： Multi-Agent模式</li><li>3： 单工作流模式</li><li>4： Claw模式</li></ul>
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置<p>来源应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： Multi-Agent模式</li><li>3： 单工作流模式</li><li>4： Claw模式</li></ul>
                     * @param _appMode <p>来源应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： Multi-Agent模式</li><li>3： 单工作流模式</li><li>4： Claw模式</li></ul>
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取<p>主 Agent 名称</p>
                     * @return MainAgentName <p>主 Agent 名称</p>
                     * 
                     */
                    std::string GetMainAgentName() const;

                    /**
                     * 设置<p>主 Agent 名称</p>
                     * @param _mainAgentName <p>主 Agent 名称</p>
                     * 
                     */
                    void SetMainAgentName(const std::string& _mainAgentName);

                    /**
                     * 判断参数 MainAgentName 是否已赋值
                     * @return MainAgentName 是否已赋值
                     * 
                     */
                    bool MainAgentNameHasBeenSet() const;

                    /**
                     * 获取<p>子 Agent 名称列表</p>
                     * @return SubAgentNameList <p>子 Agent 名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubAgentNameList() const;

                    /**
                     * 设置<p>子 Agent 名称列表</p>
                     * @param _subAgentNameList <p>子 Agent 名称列表</p>
                     * 
                     */
                    void SetSubAgentNameList(const std::vector<std::string>& _subAgentNameList);

                    /**
                     * 判断参数 SubAgentNameList 是否已赋值
                     * @return SubAgentNameList 是否已赋值
                     * 
                     */
                    bool SubAgentNameListHasBeenSet() const;

                    /**
                     * 获取<p>来源应用创建人</p>
                     * @return Creator <p>来源应用创建人</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>来源应用创建人</p>
                     * @param _creator <p>来源应用创建人</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>来源应用修改时间</p>
                     * @return UpdateTime <p>来源应用修改时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>来源应用修改时间</p>
                     * @param _updateTime <p>来源应用修改时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>来源应用当前名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>来源应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： Multi-Agent模式</li><li>3： 单工作流模式</li><li>4： Claw模式</li></ul>
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * <p>主 Agent 名称</p>
                     */
                    std::string m_mainAgentName;
                    bool m_mainAgentNameHasBeenSet;

                    /**
                     * <p>子 Agent 名称列表</p>
                     */
                    std::vector<std::string> m_subAgentNameList;
                    bool m_subAgentNameListHasBeenSet;

                    /**
                     * <p>来源应用创建人</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>来源应用修改时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REFERENCEAPPDETAIL_H_
