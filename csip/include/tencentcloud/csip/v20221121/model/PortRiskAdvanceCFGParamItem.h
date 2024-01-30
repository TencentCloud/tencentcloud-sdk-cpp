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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 端口风险高级配置项
                */
                class PortRiskAdvanceCFGParamItem : public AbstractModel
                {
                public:
                    PortRiskAdvanceCFGParamItem();
                    ~PortRiskAdvanceCFGParamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口集合,以逗号分隔
                     * @return PortSets 端口集合,以逗号分隔
                     * 
                     */
                    std::string GetPortSets() const;

                    /**
                     * 设置端口集合,以逗号分隔
                     * @param _portSets 端口集合,以逗号分隔
                     * 
                     */
                    void SetPortSets(const std::string& _portSets);

                    /**
                     * 判断参数 PortSets 是否已赋值
                     * @return PortSets 是否已赋值
                     * 
                     */
                    bool PortSetsHasBeenSet() const;

                    /**
                     * 获取检测项类型，0-系统定义，1-用户自定义
                     * @return CheckType 检测项类型，0-系统定义，1-用户自定义
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置检测项类型，0-系统定义，1-用户自定义
                     * @param _checkType 检测项类型，0-系统定义，1-用户自定义
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取检测项描述
                     * @return Detail 检测项描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置检测项描述
                     * @param _detail 检测项描述
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取是否启用，1-启用，0-禁用
                     * @return Enable 是否启用，1-启用，0-禁用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用，1-启用，0-禁用
                     * @param _enable 是否启用，1-启用，0-禁用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 端口集合,以逗号分隔
                     */
                    std::string m_portSets;
                    bool m_portSetsHasBeenSet;

                    /**
                     * 检测项类型，0-系统定义，1-用户自定义
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * 检测项描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 是否启用，1-启用，0-禁用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PORTRISKADVANCECFGPARAMITEM_H_
