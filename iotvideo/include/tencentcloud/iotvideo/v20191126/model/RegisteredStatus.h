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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REGISTEREDSTATUS_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REGISTEREDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 终端用户注册状态
                */
                class RegisteredStatus : public AbstractModel
                {
                public:
                    RegisteredStatus();
                    ~RegisteredStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端用户的唯一ID
                     * @return CunionId 终端用户的唯一ID
                     * 
                     */
                    std::string GetCunionId() const;

                    /**
                     * 设置终端用户的唯一ID
                     * @param _cunionId 终端用户的唯一ID
                     * 
                     */
                    void SetCunionId(const std::string& _cunionId);

                    /**
                     * 判断参数 CunionId 是否已赋值
                     * @return CunionId 是否已赋值
                     * 
                     */
                    bool CunionIdHasBeenSet() const;

                    /**
                     * 获取注册状态
                     * @return IsRegisted 注册状态
                     * 
                     */
                    bool GetIsRegisted() const;

                    /**
                     * 设置注册状态
                     * @param _isRegisted 注册状态
                     * 
                     */
                    void SetIsRegisted(const bool& _isRegisted);

                    /**
                     * 判断参数 IsRegisted 是否已赋值
                     * @return IsRegisted 是否已赋值
                     * 
                     */
                    bool IsRegistedHasBeenSet() const;

                private:

                    /**
                     * 终端用户的唯一ID
                     */
                    std::string m_cunionId;
                    bool m_cunionIdHasBeenSet;

                    /**
                     * 注册状态
                     */
                    bool m_isRegisted;
                    bool m_isRegistedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REGISTEREDSTATUS_H_
