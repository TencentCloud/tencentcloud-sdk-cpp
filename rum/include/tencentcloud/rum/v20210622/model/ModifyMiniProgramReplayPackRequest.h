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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYMINIPROGRAMREPLAYPACKREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYMINIPROGRAMREPLAYPACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyMiniProgramReplayPack请求参数结构体
                */
                class ModifyMiniProgramReplayPackRequest : public AbstractModel
                {
                public:
                    ModifyMiniProgramReplayPackRequest();
                    ~ModifyMiniProgramReplayPackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>回放包id（前缀mpr_）</p>
                     * @return PackId <p>回放包id（前缀mpr_）</p>
                     * 
                     */
                    std::string GetPackId() const;

                    /**
                     * 设置<p>回放包id（前缀mpr_）</p>
                     * @param _packId <p>回放包id（前缀mpr_）</p>
                     * 
                     */
                    void SetPackId(const std::string& _packId);

                    /**
                     * 判断参数 PackId 是否已赋值
                     * @return PackId 是否已赋值
                     * 
                     */
                    bool PackIdHasBeenSet() const;

                    /**
                     * 获取<p>应用版本（可选）</p>
                     * @return Release <p>应用版本（可选）</p>
                     * 
                     */
                    std::string GetRelease() const;

                    /**
                     * 设置<p>应用版本（可选）</p>
                     * @param _release <p>应用版本（可选）</p>
                     * 
                     */
                    void SetRelease(const std::string& _release);

                    /**
                     * 判断参数 Release 是否已赋值
                     * @return Release 是否已赋值
                     * 
                     */
                    bool ReleaseHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>回放包id（前缀mpr_）</p>
                     */
                    std::string m_packId;
                    bool m_packIdHasBeenSet;

                    /**
                     * <p>应用版本（可选）</p>
                     */
                    std::string m_release;
                    bool m_releaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYMINIPROGRAMREPLAYPACKREQUEST_H_
