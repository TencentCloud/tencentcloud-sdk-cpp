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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/StorageInfo.h>
#include <tencentcloud/vm/v20210922/model/DecodeParams.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 音视频任务结构
                */
                class TaskInput : public AbstractModel
                {
                public:
                    TaskInput();
                    ~TaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据ID</p>
                     * @return DataId <p>数据ID</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>数据ID</p>
                     * @param _dataId <p>数据ID</p>
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return Name <p>任务名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _name <p>任务名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>任务输入</p>
                     * @return Input <p>任务输入</p>
                     * 
                     */
                    StorageInfo GetInput() const;

                    /**
                     * 设置<p>任务输入</p>
                     * @param _input <p>任务输入</p>
                     * 
                     */
                    void SetInput(const StorageInfo& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>视频解码参数</p>
                     * @return DecodeParams <p>视频解码参数</p>
                     * 
                     */
                    DecodeParams GetDecodeParams() const;

                    /**
                     * 设置<p>视频解码参数</p>
                     * @param _decodeParams <p>视频解码参数</p>
                     * 
                     */
                    void SetDecodeParams(const DecodeParams& _decodeParams);

                    /**
                     * 判断参数 DecodeParams 是否已赋值
                     * @return DecodeParams 是否已赋值
                     * 
                     */
                    bool DecodeParamsHasBeenSet() const;

                private:

                    /**
                     * <p>数据ID</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务输入</p>
                     */
                    StorageInfo m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>视频解码参数</p>
                     */
                    DecodeParams m_decodeParams;
                    bool m_decodeParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TASKINPUT_H_
