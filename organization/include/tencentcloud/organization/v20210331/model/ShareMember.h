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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 共享成员信息
                */
                class ShareMember : public AbstractModel
                {
                public:
                    ShareMember();
                    ~ShareMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享成员Uin。
                     * @return ShareMemberUin 共享成员Uin。
                     * 
                     */
                    int64_t GetShareMemberUin() const;

                    /**
                     * 设置共享成员Uin。
                     * @param _shareMemberUin 共享成员Uin。
                     * 
                     */
                    void SetShareMemberUin(const int64_t& _shareMemberUin);

                    /**
                     * 判断参数 ShareMemberUin 是否已赋值
                     * @return ShareMemberUin 是否已赋值
                     * 
                     */
                    bool ShareMemberUinHasBeenSet() const;

                private:

                    /**
                     * 共享成员Uin。
                     */
                    int64_t m_shareMemberUin;
                    bool m_shareMemberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREMEMBER_H_
