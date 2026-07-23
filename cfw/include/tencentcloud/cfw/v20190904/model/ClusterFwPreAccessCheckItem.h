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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 预接入检查项定义
                */
                class ClusterFwPreAccessCheckItem : public AbstractModel
                {
                public:
                    ClusterFwPreAccessCheckItem();
                    ~ClusterFwPreAccessCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项 key，与查询接口 CheckResult.Stages[].Stage 一一对应
                     * @return Stage 检查项 key，与查询接口 CheckResult.Stages[].Stage 一一对应
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置检查项 key，与查询接口 CheckResult.Stages[].Stage 一一对应
                     * @param _stage 检查项 key，与查询接口 CheckResult.Stages[].Stage 一一对应
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取该检查项的展示文案，已按请求的 Language 返回中文或英文
                     * @return Description 该检查项的展示文案，已按请求的 Language 返回中文或英文
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置该检查项的展示文案，已按请求的 Language 返回中文或英文
                     * @param _description 该检查项的展示文案，已按请求的 Language 返回中文或英文
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 检查项 key，与查询接口 CheckResult.Stages[].Stage 一一对应
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 该检查项的展示文案，已按请求的 Language 返回中文或英文
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKITEM_H_
