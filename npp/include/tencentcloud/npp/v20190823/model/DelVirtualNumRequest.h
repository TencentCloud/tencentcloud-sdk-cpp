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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMREQUEST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DelVirtualNum请求参数结构体
                */
                class DelVirtualNumRequest : public AbstractModel
                {
                public:
                    DelVirtualNumRequest();
                    ~DelVirtualNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务appid
                     * @return BizAppId 业务appid
                     * 
                     */
                    std::string GetBizAppId() const;

                    /**
                     * 设置业务appid
                     * @param _bizAppId 业务appid
                     * 
                     */
                    void SetBizAppId(const std::string& _bizAppId);

                    /**
                     * 判断参数 BizAppId 是否已赋值
                     * @return BizAppId 是否已赋值
                     * 
                     */
                    bool BizAppIdHasBeenSet() const;

                    /**
                     * 获取双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * @return BindId 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * 
                     */
                    std::string GetBindId() const;

                    /**
                     * 设置双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * @param _bindId 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * 
                     */
                    void SetBindId(const std::string& _bindId);

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * @return BizId 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * 
                     */
                    std::string GetBizId() const;

                    /**
                     * 设置应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * @param _bizId 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     * 
                     */
                    void SetBizId(const std::string& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * 业务appid
                     */
                    std::string m_bizAppId;
                    bool m_bizAppIdHasBeenSet;

                    /**
                     * 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     */
                    std::string m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * 应用二级业务 ID，bizId 需保证在该 appId 下全局唯一，最大长度不超过 16 个字节。
                     */
                    std::string m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMREQUEST_H_
