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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyAutoOpenProVersionConfig请求参数结构体
                */
                class ModifyAutoOpenProVersionConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoOpenProVersionConfigRequest();
                    ~ModifyAutoOpenProVersionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * @return Status 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * @param _status 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
