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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务依赖的边信息
                */
                class OpsTaskLinkInfoDto : public AbstractModel
                {
                public:
                    OpsTaskLinkInfoDto();
                    ~OpsTaskLinkInfoDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下游任务id
                     * @return TaskTo 下游任务id
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置下游任务id
                     * @param _taskTo 下游任务id
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取上游任务id
                     * @return TaskFrom 上游任务id
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置上游任务id
                     * @param _taskFrom 上游任务id
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取依赖边类型 1、“real_real”表示任务->任务；2、"virtual_real" 跨工作流任务->任务
                     * @return LinkType 依赖边类型 1、“real_real”表示任务->任务；2、"virtual_real" 跨工作流任务->任务
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置依赖边类型 1、“real_real”表示任务->任务；2、"virtual_real" 跨工作流任务->任务
                     * @param _linkType 依赖边类型 1、“real_real”表示任务->任务；2、"virtual_real" 跨工作流任务->任务
                     * 
                     */
                    void SetLinkType(const std::string& _linkType);

                    /**
                     * 判断参数 LinkType 是否已赋值
                     * @return LinkType 是否已赋值
                     * 
                     */
                    bool LinkTypeHasBeenSet() const;

                    /**
                     * 获取依赖边id
                     * @return LinkId 依赖边id
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置依赖边id
                     * @param _linkId 依赖边id
                     * 
                     */
                    void SetLinkId(const std::string& _linkId);

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                    /**
                     * 获取为了区分新增的循环依赖新增的类型。默认是normal，循环依赖则是circulate
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkStyle 为了区分新增的循环依赖新增的类型。默认是normal，循环依赖则是circulate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkStyle() const;

                    /**
                     * 设置为了区分新增的循环依赖新增的类型。默认是normal，循环依赖则是circulate
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkStyle 为了区分新增的循环依赖新增的类型。默认是normal，循环依赖则是circulate
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkStyle(const std::string& _linkStyle);

                    /**
                     * 判断参数 LinkStyle 是否已赋值
                     * @return LinkStyle 是否已赋值
                     * 
                     */
                    bool LinkStyleHasBeenSet() const;

                private:

                    /**
                     * 下游任务id
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * 上游任务id
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * 依赖边类型 1、“real_real”表示任务->任务；2、"virtual_real" 跨工作流任务->任务
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * 依赖边id
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * 为了区分新增的循环依赖新增的类型。默认是normal，循环依赖则是circulate
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkStyle;
                    bool m_linkStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_
