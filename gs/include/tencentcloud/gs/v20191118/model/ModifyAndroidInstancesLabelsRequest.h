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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESLABELSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESLABELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceLabel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyAndroidInstancesLabels请求参数结构体
                */
                class ModifyAndroidInstancesLabelsRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstancesLabelsRequest();
                    ~ModifyAndroidInstancesLabelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表
                     * @return AndroidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表
                     * @param _androidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取安卓实例标签列表
                     * @return AndroidInstanceLabels 安卓实例标签列表
                     * 
                     */
                    std::vector<AndroidInstanceLabel> GetAndroidInstanceLabels() const;

                    /**
                     * 设置安卓实例标签列表
                     * @param _androidInstanceLabels 安卓实例标签列表
                     * 
                     */
                    void SetAndroidInstanceLabels(const std::vector<AndroidInstanceLabel>& _androidInstanceLabels);

                    /**
                     * 判断参数 AndroidInstanceLabels 是否已赋值
                     * @return AndroidInstanceLabels 是否已赋值
                     * 
                     */
                    bool AndroidInstanceLabelsHasBeenSet() const;

                    /**
                     * 获取操作类型。ADD：标签键不存在的添加新标签，标签键存在的将覆盖原有标签REMOVE：根据标签键删除标签REPLACE：使用请求标签列表替换原来所有标签CLEAR：清除所有标签
                     * @return Operation 操作类型。ADD：标签键不存在的添加新标签，标签键存在的将覆盖原有标签REMOVE：根据标签键删除标签REPLACE：使用请求标签列表替换原来所有标签CLEAR：清除所有标签
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型。ADD：标签键不存在的添加新标签，标签键存在的将覆盖原有标签REMOVE：根据标签键删除标签REPLACE：使用请求标签列表替换原来所有标签CLEAR：清除所有标签
                     * @param _operation 操作类型。ADD：标签键不存在的添加新标签，标签键存在的将覆盖原有标签REMOVE：根据标签键删除标签REPLACE：使用请求标签列表替换原来所有标签CLEAR：清除所有标签
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 安卓实例标签列表
                     */
                    std::vector<AndroidInstanceLabel> m_androidInstanceLabels;
                    bool m_androidInstanceLabelsHasBeenSet;

                    /**
                     * 操作类型。ADD：标签键不存在的添加新标签，标签键存在的将覆盖原有标签REMOVE：根据标签键删除标签REPLACE：使用请求标签列表替换原来所有标签CLEAR：清除所有标签
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESLABELSREQUEST_H_
