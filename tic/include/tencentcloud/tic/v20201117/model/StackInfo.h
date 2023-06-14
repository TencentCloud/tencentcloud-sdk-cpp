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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_STACKINFO_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_STACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * 资源栈信息
                */
                class StackInfo : public AbstractModel
                {
                public:
                    StackInfo();
                    ~StackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源栈ID
                     * @return StackId 资源栈ID
                     * 
                     */
                    std::string GetStackId() const;

                    /**
                     * 设置资源栈ID
                     * @param _stackId 资源栈ID
                     * 
                     */
                    void SetStackId(const std::string& _stackId);

                    /**
                     * 判断参数 StackId 是否已赋值
                     * @return StackId 是否已赋值
                     * 
                     */
                    bool StackIdHasBeenSet() const;

                    /**
                     * 获取资源栈名称
                     * @return StackName 资源栈名称
                     * 
                     */
                    std::string GetStackName() const;

                    /**
                     * 设置资源栈名称
                     * @param _stackName 资源栈名称
                     * 
                     */
                    void SetStackName(const std::string& _stackName);

                    /**
                     * 判断参数 StackName 是否已赋值
                     * @return StackName 是否已赋值
                     * 
                     */
                    bool StackNameHasBeenSet() const;

                    /**
                     * 获取资源栈描述
                     * @return Description 资源栈描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源栈描述
                     * @param _description 资源栈描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取所处地域
                     * @return Region 所处地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所处地域
                     * @param _region 所处地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资源栈状态
                     * @return Status 资源栈状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源栈状态
                     * @param _status 资源栈状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 资源栈ID
                     */
                    std::string m_stackId;
                    bool m_stackIdHasBeenSet;

                    /**
                     * 资源栈名称
                     */
                    std::string m_stackName;
                    bool m_stackNameHasBeenSet;

                    /**
                     * 资源栈描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 所处地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资源栈状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_STACKINFO_H_
