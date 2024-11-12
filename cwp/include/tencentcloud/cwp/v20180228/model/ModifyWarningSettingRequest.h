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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WarningObject.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWarningSetting请求参数结构体
                */
                class ModifyWarningSettingRequest : public AbstractModel
                {
                public:
                    ModifyWarningSettingRequest();
                    ~ModifyWarningSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改告警设置的内容
                     * @return WarningObjects 修改告警设置的内容
                     * 
                     */
                    std::vector<WarningObject> GetWarningObjects() const;

                    /**
                     * 设置修改告警设置的内容
                     * @param _warningObjects 修改告警设置的内容
                     * 
                     */
                    void SetWarningObjects(const std::vector<WarningObject>& _warningObjects);

                    /**
                     * 判断参数 WarningObjects 是否已赋值
                     * @return WarningObjects 是否已赋值
                     * 
                     */
                    bool WarningObjectsHasBeenSet() const;

                private:

                    /**
                     * 修改告警设置的内容
                     */
                    std::vector<WarningObject> m_warningObjects;
                    bool m_warningObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGSETTINGREQUEST_H_
