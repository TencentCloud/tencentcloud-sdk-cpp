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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTCATEGORY_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ChecklistPoint.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查清单大类
                */
                class ChecklistCategory : public AbstractModel
                {
                public:
                    ChecklistCategory();
                    ~ChecklistCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同风险审查清单分组名称，每个分组下可以包含多个检查点</p>
                     * @return Name <p>合同风险审查清单分组名称，每个分组下可以包含多个检查点</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>合同风险审查清单分组名称，每个分组下可以包含多个检查点</p>
                     * @param _name <p>合同风险审查清单分组名称，每个分组下可以包含多个检查点</p>
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
                     * 获取<p>合同风险审查清单检查点列表，每个检查点定义了一个具体的风险项</p>
                     * @return Points <p>合同风险审查清单检查点列表，每个检查点定义了一个具体的风险项</p>
                     * 
                     */
                    std::vector<ChecklistPoint> GetPoints() const;

                    /**
                     * 设置<p>合同风险审查清单检查点列表，每个检查点定义了一个具体的风险项</p>
                     * @param _points <p>合同风险审查清单检查点列表，每个检查点定义了一个具体的风险项</p>
                     * 
                     */
                    void SetPoints(const std::vector<ChecklistPoint>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * <p>合同风险审查清单分组名称，每个分组下可以包含多个检查点</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点列表，每个检查点定义了一个具体的风险项</p>
                     */
                    std::vector<ChecklistPoint> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTCATEGORY_H_
