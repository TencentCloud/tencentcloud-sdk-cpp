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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 可退还云硬盘详细信息
                */
                class DiskReturnable : public AbstractModel
                {
                public:
                    DiskReturnable();
                    ~DiskReturnable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘ID。
                     * @return DiskId 云硬盘ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID。
                     * @param _diskId 云硬盘ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取云硬盘是否可退还。
                     * @return IsReturnable 云硬盘是否可退还。
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置云硬盘是否可退还。
                     * @param _isReturnable 云硬盘是否可退还。
                     * 
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取云硬盘退还失败错误码。
                     * @return ReturnFailCode 云硬盘退还失败错误码。
                     * 
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置云硬盘退还失败错误码。
                     * @param _returnFailCode 云硬盘退还失败错误码。
                     * 
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     * 
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取云硬盘退还失败错误信息。
                     * @return ReturnFailMessage 云硬盘退还失败错误信息。
                     * 
                     */
                    std::string GetReturnFailMessage() const;

                    /**
                     * 设置云硬盘退还失败错误信息。
                     * @param _returnFailMessage 云硬盘退还失败错误信息。
                     * 
                     */
                    void SetReturnFailMessage(const std::string& _returnFailMessage);

                    /**
                     * 判断参数 ReturnFailMessage 是否已赋值
                     * @return ReturnFailMessage 是否已赋值
                     * 
                     */
                    bool ReturnFailMessageHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云硬盘是否可退还。
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * 云硬盘退还失败错误码。
                     */
                    int64_t m_returnFailCode;
                    bool m_returnFailCodeHasBeenSet;

                    /**
                     * 云硬盘退还失败错误信息。
                     */
                    std::string m_returnFailMessage;
                    bool m_returnFailMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_
