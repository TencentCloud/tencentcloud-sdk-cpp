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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CMSSCENEDETAIL_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CMSSCENEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CMSBizInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核（内容安全）场景明细。
                */
                class CMSSceneDetail : public AbstractModel
                {
                public:
                    CMSSceneDetail();
                    ~CMSSceneDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略信息</p>
                     * @return BizInfos <p>策略信息</p>
                     * 
                     */
                    std::vector<CMSBizInfo> GetBizInfos() const;

                    /**
                     * 设置<p>策略信息</p>
                     * @param _bizInfos <p>策略信息</p>
                     * 
                     */
                    void SetBizInfos(const std::vector<CMSBizInfo>& _bizInfos);

                    /**
                     * 判断参数 BizInfos 是否已赋值
                     * @return BizInfos 是否已赋值
                     * 
                     */
                    bool BizInfosHasBeenSet() const;

                    /**
                     * 获取<p>SceneID 。</p>
                     * @return SceneID <p>SceneID 。</p>
                     * 
                     */
                    std::string GetSceneID() const;

                    /**
                     * 设置<p>SceneID 。</p>
                     * @param _sceneID <p>SceneID 。</p>
                     * 
                     */
                    void SetSceneID(const std::string& _sceneID);

                    /**
                     * 判断参数 SceneID 是否已赋值
                     * @return SceneID 是否已赋值
                     * 
                     */
                    bool SceneIDHasBeenSet() const;

                private:

                    /**
                     * <p>策略信息</p>
                     */
                    std::vector<CMSBizInfo> m_bizInfos;
                    bool m_bizInfosHasBeenSet;

                    /**
                     * <p>SceneID 。</p>
                     */
                    std::string m_sceneID;
                    bool m_sceneIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CMSSCENEDETAIL_H_
