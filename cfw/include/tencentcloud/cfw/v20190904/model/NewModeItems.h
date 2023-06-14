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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_

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
                * 新增模式传递参数
                */
                class NewModeItems : public AbstractModel
                {
                public:
                    NewModeItems();
                    ~NewModeItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新增模式下接入的vpc列表
                     * @return VpcList 新增模式下接入的vpc列表
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置新增模式下接入的vpc列表
                     * @param _vpcList 新增模式下接入的vpc列表
                     * 
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取新增模式下绑定的出口弹性公网ip列表，其中Eips和AddCount至少传递一个。
                     * @return Eips 新增模式下绑定的出口弹性公网ip列表，其中Eips和AddCount至少传递一个。
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置新增模式下绑定的出口弹性公网ip列表，其中Eips和AddCount至少传递一个。
                     * @param _eips 新增模式下绑定的出口弹性公网ip列表，其中Eips和AddCount至少传递一个。
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                    /**
                     * 获取新增模式下新增绑定的出口弹性公网ip个数，其中Eips和AddCount至少传递一个。
                     * @return AddCount 新增模式下新增绑定的出口弹性公网ip个数，其中Eips和AddCount至少传递一个。
                     * 
                     */
                    int64_t GetAddCount() const;

                    /**
                     * 设置新增模式下新增绑定的出口弹性公网ip个数，其中Eips和AddCount至少传递一个。
                     * @param _addCount 新增模式下新增绑定的出口弹性公网ip个数，其中Eips和AddCount至少传递一个。
                     * 
                     */
                    void SetAddCount(const int64_t& _addCount);

                    /**
                     * 判断参数 AddCount 是否已赋值
                     * @return AddCount 是否已赋值
                     * 
                     */
                    bool AddCountHasBeenSet() const;

                private:

                    /**
                     * 新增模式下接入的vpc列表
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 新增模式下绑定的出口弹性公网ip列表，其中Eips和AddCount至少传递一个。
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                    /**
                     * 新增模式下新增绑定的出口弹性公网ip个数，其中Eips和AddCount至少传递一个。
                     */
                    int64_t m_addCount;
                    bool m_addCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NEWMODEITEMS_H_
