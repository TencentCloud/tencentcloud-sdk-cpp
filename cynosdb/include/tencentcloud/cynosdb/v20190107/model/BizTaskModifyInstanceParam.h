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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYINSTANCEPARAM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYINSTANCEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例参数修改任务详情
                */
                class BizTaskModifyInstanceParam : public AbstractModel
                {
                public:
                    BizTaskModifyInstanceParam();
                    ~BizTaskModifyInstanceParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例参数修改任务详情
                     * @return ModifyInstanceParamList 实例参数修改任务详情
                     * 
                     */
                    std::vector<ModifyParamItem> GetModifyInstanceParamList() const;

                    /**
                     * 设置实例参数修改任务详情
                     * @param _modifyInstanceParamList 实例参数修改任务详情
                     * 
                     */
                    void SetModifyInstanceParamList(const std::vector<ModifyParamItem>& _modifyInstanceParamList);

                    /**
                     * 判断参数 ModifyInstanceParamList 是否已赋值
                     * @return ModifyInstanceParamList 是否已赋值
                     * 
                     */
                    bool ModifyInstanceParamListHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例参数修改任务详情
                     */
                    std::vector<ModifyParamItem> m_modifyInstanceParamList;
                    bool m_modifyInstanceParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYINSTANCEPARAM_H_
