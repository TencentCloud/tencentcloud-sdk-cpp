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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EVENTFRAME_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EVENTFRAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 堆栈帧
                */
                class EventFrame : public AbstractModel
                {
                public:
                    EventFrame();
                    ~EventFrame() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>绝对路径</p>
                     * @return AbsPath <p>绝对路径</p>
                     * 
                     */
                    std::string GetAbsPath() const;

                    /**
                     * 设置<p>绝对路径</p>
                     * @param _absPath <p>绝对路径</p>
                     * 
                     */
                    void SetAbsPath(const std::string& _absPath);

                    /**
                     * 判断参数 AbsPath 是否已赋值
                     * @return AbsPath 是否已赋值
                     * 
                     */
                    bool AbsPathHasBeenSet() const;

                    /**
                     * 获取<p>列号</p>
                     * @return ColNo <p>列号</p>
                     * 
                     */
                    int64_t GetColNo() const;

                    /**
                     * 设置<p>列号</p>
                     * @param _colNo <p>列号</p>
                     * 
                     */
                    void SetColNo(const int64_t& _colNo);

                    /**
                     * 判断参数 ColNo 是否已赋值
                     * @return ColNo 是否已赋值
                     * 
                     */
                    bool ColNoHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return Filename <p>文件名</p>
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _filename <p>文件名</p>
                     * 
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取<p>函数名</p>
                     * @return Function <p>函数名</p>
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置<p>函数名</p>
                     * @param _function <p>函数名</p>
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>行号</p>
                     * @return LineNo <p>行号</p>
                     * 
                     */
                    int64_t GetLineNo() const;

                    /**
                     * 设置<p>行号</p>
                     * @param _lineNo <p>行号</p>
                     * 
                     */
                    void SetLineNo(const int64_t& _lineNo);

                    /**
                     * 判断参数 LineNo 是否已赋值
                     * @return LineNo 是否已赋值
                     * 
                     */
                    bool LineNoHasBeenSet() const;

                    /**
                     * 获取<p>是否应用内 0/1</p>
                     * @return InApp <p>是否应用内 0/1</p>
                     * 
                     */
                    int64_t GetInApp() const;

                    /**
                     * 设置<p>是否应用内 0/1</p>
                     * @param _inApp <p>是否应用内 0/1</p>
                     * 
                     */
                    void SetInApp(const int64_t& _inApp);

                    /**
                     * 判断参数 InApp 是否已赋值
                     * @return InApp 是否已赋值
                     * 
                     */
                    bool InAppHasBeenSet() const;

                    /**
                     * 获取<p>模块</p>
                     * @return Module <p>模块</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块</p>
                     * @param _module <p>模块</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>包名</p>
                     * @return Package <p>包名</p>
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置<p>包名</p>
                     * @param _package <p>包名</p>
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取<p>栈层级</p>
                     * @return StackLevel <p>栈层级</p>
                     * 
                     */
                    int64_t GetStackLevel() const;

                    /**
                     * 设置<p>栈层级</p>
                     * @param _stackLevel <p>栈层级</p>
                     * 
                     */
                    void SetStackLevel(const int64_t& _stackLevel);

                    /**
                     * 判断参数 StackLevel 是否已赋值
                     * @return StackLevel 是否已赋值
                     * 
                     */
                    bool StackLevelHasBeenSet() const;

                private:

                    /**
                     * <p>绝对路径</p>
                     */
                    std::string m_absPath;
                    bool m_absPathHasBeenSet;

                    /**
                     * <p>列号</p>
                     */
                    int64_t m_colNo;
                    bool m_colNoHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * <p>函数名</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>行号</p>
                     */
                    int64_t m_lineNo;
                    bool m_lineNoHasBeenSet;

                    /**
                     * <p>是否应用内 0/1</p>
                     */
                    int64_t m_inApp;
                    bool m_inAppHasBeenSet;

                    /**
                     * <p>模块</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>包名</p>
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * <p>栈层级</p>
                     */
                    int64_t m_stackLevel;
                    bool m_stackLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EVENTFRAME_H_
