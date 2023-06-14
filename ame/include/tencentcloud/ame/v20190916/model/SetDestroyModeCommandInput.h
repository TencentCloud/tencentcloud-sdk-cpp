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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SETDESTROYMODECOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SETDESTROYMODECOMMANDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 设置销毁模式
                */
                class SetDestroyModeCommandInput : public AbstractModel
                {
                public:
                    SetDestroyModeCommandInput();
                    ~SetDestroyModeCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取销毁模式，取值有：
<li>Auto：房间没人时自动销毁</li>
<li>Expire：房间没人时过期自动销毁</li>
<li>Never：不自动销毁，需手动销毁</li>默认为：Auto。
                     * @return DestroyMode 销毁模式，取值有：
<li>Auto：房间没人时自动销毁</li>
<li>Expire：房间没人时过期自动销毁</li>
<li>Never：不自动销毁，需手动销毁</li>默认为：Auto。
                     * 
                     */
                    std::string GetDestroyMode() const;

                    /**
                     * 设置销毁模式，取值有：
<li>Auto：房间没人时自动销毁</li>
<li>Expire：房间没人时过期自动销毁</li>
<li>Never：不自动销毁，需手动销毁</li>默认为：Auto。
                     * @param _destroyMode 销毁模式，取值有：
<li>Auto：房间没人时自动销毁</li>
<li>Expire：房间没人时过期自动销毁</li>
<li>Never：不自动销毁，需手动销毁</li>默认为：Auto。
                     * 
                     */
                    void SetDestroyMode(const std::string& _destroyMode);

                    /**
                     * 判断参数 DestroyMode 是否已赋值
                     * @return DestroyMode 是否已赋值
                     * 
                     */
                    bool DestroyModeHasBeenSet() const;

                    /**
                     * 获取过期销毁时间，单位：秒，当DestroyMode取Expire时必填。
                     * @return DestroyExpireTime 过期销毁时间，单位：秒，当DestroyMode取Expire时必填。
                     * 
                     */
                    int64_t GetDestroyExpireTime() const;

                    /**
                     * 设置过期销毁时间，单位：秒，当DestroyMode取Expire时必填。
                     * @param _destroyExpireTime 过期销毁时间，单位：秒，当DestroyMode取Expire时必填。
                     * 
                     */
                    void SetDestroyExpireTime(const int64_t& _destroyExpireTime);

                    /**
                     * 判断参数 DestroyExpireTime 是否已赋值
                     * @return DestroyExpireTime 是否已赋值
                     * 
                     */
                    bool DestroyExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 销毁模式，取值有：
<li>Auto：房间没人时自动销毁</li>
<li>Expire：房间没人时过期自动销毁</li>
<li>Never：不自动销毁，需手动销毁</li>默认为：Auto。
                     */
                    std::string m_destroyMode;
                    bool m_destroyModeHasBeenSet;

                    /**
                     * 过期销毁时间，单位：秒，当DestroyMode取Expire时必填。
                     */
                    int64_t m_destroyExpireTime;
                    bool m_destroyExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SETDESTROYMODECOMMANDINPUT_H_
