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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWarningHostConfig请求参数结构体
                */
                class ModifyWarningHostConfigRequest : public AbstractModel
                {
                public:
                    ModifyWarningHostConfigRequest();
                    ~ModifyWarningHostConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警类型
                     * @return Type 告警类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置告警类型
                     * @param _type 告警类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * @return HostRange 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 设置告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * @param _hostRange 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * 
                     */
                    void SetHostRange(const int64_t& _hostRange);

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                    /**
                     * 获取项目或标签的名称列表，自选主机时为空
                     * @return ItemLabels 项目或标签的名称列表，自选主机时为空
                     * 
                     */
                    std::vector<std::string> GetItemLabels() const;

                    /**
                     * 设置项目或标签的名称列表，自选主机时为空
                     * @param _itemLabels 项目或标签的名称列表，自选主机时为空
                     * 
                     */
                    void SetItemLabels(const std::vector<std::string>& _itemLabels);

                    /**
                     * 判断参数 ItemLabels 是否已赋值
                     * @return ItemLabels 是否已赋值
                     * 
                     */
                    bool ItemLabelsHasBeenSet() const;

                    /**
                     * 获取机器列表
                     * @return Quuids 机器列表
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置机器列表
                     * @param _quuids 机器列表
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取项目或标签的id列表，自选主机时为空
                     * @return ItemLabelIds 项目或标签的id列表，自选主机时为空
                     * 
                     */
                    std::vector<std::string> GetItemLabelIds() const;

                    /**
                     * 设置项目或标签的id列表，自选主机时为空
                     * @param _itemLabelIds 项目或标签的id列表，自选主机时为空
                     * 
                     */
                    void SetItemLabelIds(const std::vector<std::string>& _itemLabelIds);

                    /**
                     * 判断参数 ItemLabelIds 是否已赋值
                     * @return ItemLabelIds 是否已赋值
                     * 
                     */
                    bool ItemLabelIdsHasBeenSet() const;

                    /**
                     * 获取需排除的机器列表
                     * @return ExcludedQuuids 需排除的机器列表
                     * 
                     */
                    std::vector<std::string> GetExcludedQuuids() const;

                    /**
                     * 设置需排除的机器列表
                     * @param _excludedQuuids 需排除的机器列表
                     * 
                     */
                    void SetExcludedQuuids(const std::vector<std::string>& _excludedQuuids);

                    /**
                     * 判断参数 ExcludedQuuids 是否已赋值
                     * @return ExcludedQuuids 是否已赋值
                     * 
                     */
                    bool ExcludedQuuidsHasBeenSet() const;

                private:

                    /**
                     * 告警类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                    /**
                     * 项目或标签的名称列表，自选主机时为空
                     */
                    std::vector<std::string> m_itemLabels;
                    bool m_itemLabelsHasBeenSet;

                    /**
                     * 机器列表
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 项目或标签的id列表，自选主机时为空
                     */
                    std::vector<std::string> m_itemLabelIds;
                    bool m_itemLabelIdsHasBeenSet;

                    /**
                     * 需排除的机器列表
                     */
                    std::vector<std::string> m_excludedQuuids;
                    bool m_excludedQuuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_
