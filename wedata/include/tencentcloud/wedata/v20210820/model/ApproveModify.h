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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVEMODIFY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVEMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 修改审批单状态
                */
                class ApproveModify : public AbstractModel
                {
                public:
                    ApproveModify();
                    ~ApproveModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审批单id
                     * @return ApproveId 审批单id
                     * 
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置审批单id
                     * @param _approveId 审批单id
                     * 
                     */
                    void SetApproveId(const std::string& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     * 
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取是否修改成功
                     * @return Success 是否修改成功
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置是否修改成功
                     * @param _success 是否修改成功
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                private:

                    /**
                     * 审批单id
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * 是否修改成功
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVEMODIFY_H_
