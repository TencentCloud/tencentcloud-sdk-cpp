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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEMACHINETAGSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEMACHINETAGSREQUEST_H_

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
                * UpdateMachineTags请求参数结构体
                */
                class UpdateMachineTagsRequest : public AbstractModel
                {
                public:
                    UpdateMachineTagsRequest();
                    ~UpdateMachineTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器 Quuid
                     * @return Quuid 机器 Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器 Quuid
                     * @param _quuid 机器 Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取标签ID，该操作会覆盖原有的标签列表
                     * @return TagIds 标签ID，该操作会覆盖原有的标签列表
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置标签ID，该操作会覆盖原有的标签列表
                     * @param _tagIds 标签ID，该操作会覆盖原有的标签列表
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取服务器地区 如: ap-guangzhou
                     * @return MachineRegion 服务器地区 如: ap-guangzhou
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置服务器地区 如: ap-guangzhou
                     * @param _machineRegion 服务器地区 如: ap-guangzhou
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取服务器类型(CVM|BM|ECM|LH|Other)
                     * @return MachineArea 服务器类型(CVM|BM|ECM|LH|Other)
                     * 
                     */
                    std::string GetMachineArea() const;

                    /**
                     * 设置服务器类型(CVM|BM|ECM|LH|Other)
                     * @param _machineArea 服务器类型(CVM|BM|ECM|LH|Other)
                     * 
                     */
                    void SetMachineArea(const std::string& _machineArea);

                    /**
                     * 判断参数 MachineArea 是否已赋值
                     * @return MachineArea 是否已赋值
                     * 
                     */
                    bool MachineAreaHasBeenSet() const;

                private:

                    /**
                     * 机器 Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 标签ID，该操作会覆盖原有的标签列表
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * 服务器地区 如: ap-guangzhou
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 服务器类型(CVM|BM|ECM|LH|Other)
                     */
                    std::string m_machineArea;
                    bool m_machineAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEMACHINETAGSREQUEST_H_
