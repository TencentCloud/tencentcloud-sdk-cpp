/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEUNBINDFAILEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEUNBINDFAILEDITEM_H_

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
                * 解绑失败明细
                */
                class LicenseUnbindFailedItem : public AbstractModel
                {
                public:
                    LicenseUnbindFailedItem();
                    ~LicenseUnbindFailedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>失败原因</p>
                     * @return ExceptionMessage <p>失败原因</p>
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _exceptionMessage <p>失败原因</p>
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEUNBINDFAILEDITEM_H_
